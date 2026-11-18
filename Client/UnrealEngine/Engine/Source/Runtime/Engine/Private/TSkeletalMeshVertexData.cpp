// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 72

// GetDataPointer @ 147c55f30

uchar * __thiscall
TSkeletalMeshVertexData<UE::Math::TVector<float>_>::GetDataPointer
          (TSkeletalMeshVertexData<UE::Math::TVector<float>_> *this)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  
  if (*(int *)&this->field_0x18 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uchar *)(*pcVar1)();
      return puVar3;
    }
  }
  puVar3 = *(uchar **)&this->field_0x10;
  if (((ulonglong)puVar3 & 1) != 0) {
    puVar3 = &this->field_0x10 + ((longlong)puVar3 >> 0x18);
  }
  return puVar3;
}

// GetNumVertices @ 147c57de0

uint __thiscall
TSkeletalMeshVertexData<UE::Math::TVector<float>_>::GetNumVertices
          (TSkeletalMeshVertexData<UE::Math::TVector<float>_> *this)

{
  return *(uint *)&this->field_0x18;
}

// GetResourceArray @ 147c5a7e0

FResourceArrayInterface * __thiscall
TSkeletalMeshVertexData<UE::Math::TVector<float>_>::GetResourceArray
          (TSkeletalMeshVertexData<UE::Math::TVector<float>_> *this)

{
  FResourceArrayInterface *pFVar1;
  
  pFVar1 = (FResourceArrayInterface *)&this->field_0x8;
  if (this == (TSkeletalMeshVertexData<UE::Math::TVector<float>_> *)0x0) {
    pFVar1 = (FResourceArrayInterface *)0x0;
  }
  return pFVar1;
}

// GetStride @ 147c5ba10

uint __thiscall
TSkeletalMeshVertexData<UE::Math::TVector<float>_>::GetStride
          (TSkeletalMeshVertexData<UE::Math::TVector<float>_> *this)

{
  return 0xc;
}

// ResizeBuffer @ 147c7e380

void __thiscall
TSkeletalMeshVertexData<UE::Math::TVector<float>_>::ResizeBuffer
          (TSkeletalMeshVertexData<UE::Math::TVector<float>_> *this,uint param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  
  puVar1 = &this->field_0x10;
  uVar7 = *(uint *)&this->field_0x18;
  puVar2 = &this->field_0x18;
  if (uVar7 < param_1) {
    if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
    }
    if (*(int *)&this->field_0x1c < (int)param_1) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0xc,4,param_1,(ForAnyElementType *)puVar1,uVar7,(int *)&this->field_0x1c);
    }
    UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (0xc,4,param_1 - *(int *)&this->field_0x18,(ForAnyElementType *)puVar1,(int *)puVar2,
               (int *)&this->field_0x1c);
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
      puVar6 = *(undefined1 **)puVar1;
      if (((ulonglong)puVar6 & 1) != 0) {
        puVar6 = puVar1 + ((longlong)puVar6 >> 0x18);
      }
      iVar5 = (*(int *)puVar2 - uVar7) - param_1;
      if (iVar5 != 0) {
        memmove(puVar6 + (longlong)(int)param_1 * 0xc,
                (void *)((longlong)(puVar6 + (longlong)(int)param_1 * 0xc) +
                        (longlong)(int)uVar7 * 0xc),(longlong)iVar5 * 0xc);
      }
      *(uint *)puVar2 = *(int *)puVar2 - uVar7;
      UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0xc,4,(ForAnyElementType *)puVar1,*(int *)puVar2,(int *)&this->field_0x1c);
    }
  }
  return;
}

// Serialize @ 147c7f8e0

void __thiscall
TSkeletalMeshVertexData<UE::Math::TVector<float>_>::Serialize
          (TSkeletalMeshVertexData<UE::Math::TVector<float>_> *this,FArchive *param_1)

{
  TArray<UE::Math::TVector<float>,TMemoryImageAllocator<0>_>::BulkSerialize
            ((TArray<UE::Math::TVector<float>,TMemoryImageAllocator<0>_> *)&this->field_0x10,param_1
             ,false);
  return;
}

// GetDataPointer @ 14846b9c0

uchar * __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<1>_>::GetDataPointer
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<1>_> *this)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  
  if (*(int *)&this->field_0x18 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uchar *)(*pcVar1)();
      return puVar3;
    }
  }
  puVar3 = *(uchar **)&this->field_0x10;
  if (((ulonglong)puVar3 & 1) != 0) {
    puVar3 = &this->field_0x10 + ((longlong)puVar3 >> 0x18);
  }
  return puVar3;
}

// GetDataPointer @ 14846ba20

uchar * __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<2>_>::GetDataPointer
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<2>_> *this)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  
  if (*(int *)&this->field_0x18 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uchar *)(*pcVar1)();
      return puVar3;
    }
  }
  puVar3 = *(uchar **)&this->field_0x10;
  if (((ulonglong)puVar3 & 1) != 0) {
    puVar3 = &this->field_0x10 + ((longlong)puVar3 >> 0x18);
  }
  return puVar3;
}

// GetDataPointer @ 14846ba80

uchar * __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<3>_>::GetDataPointer
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<3>_> *this)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  
  if (*(int *)&this->field_0x18 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uchar *)(*pcVar1)();
      return puVar3;
    }
  }
  puVar3 = *(uchar **)&this->field_0x10;
  if (((ulonglong)puVar3 & 1) != 0) {
    puVar3 = &this->field_0x10 + ((longlong)puVar3 >> 0x18);
  }
  return puVar3;
}

// GetDataPointer @ 14846bae0

uchar * __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<4>_>::GetDataPointer
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<4>_> *this)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  
  if (*(int *)&this->field_0x18 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uchar *)(*pcVar1)();
      return puVar3;
    }
  }
  puVar3 = *(uchar **)&this->field_0x10;
  if (((ulonglong)puVar3 & 1) != 0) {
    puVar3 = &this->field_0x10 + ((longlong)puVar3 >> 0x18);
  }
  return puVar3;
}

// GetDataPointer @ 14846bb40

uchar * __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<1>_>::GetDataPointer
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<1>_> *this)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  
  if (*(int *)&this->field_0x18 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uchar *)(*pcVar1)();
      return puVar3;
    }
  }
  puVar3 = *(uchar **)&this->field_0x10;
  if (((ulonglong)puVar3 & 1) != 0) {
    puVar3 = &this->field_0x10 + ((longlong)puVar3 >> 0x18);
  }
  return puVar3;
}

// GetDataPointer @ 14846bba0

uchar * __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<2>_>::GetDataPointer
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<2>_> *this)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  
  if (*(int *)&this->field_0x18 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uchar *)(*pcVar1)();
      return puVar3;
    }
  }
  puVar3 = *(uchar **)&this->field_0x10;
  if (((ulonglong)puVar3 & 1) != 0) {
    puVar3 = &this->field_0x10 + ((longlong)puVar3 >> 0x18);
  }
  return puVar3;
}

// GetDataPointer @ 14846bc00

uchar * __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<3>_>::GetDataPointer
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<3>_> *this)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  
  if (*(int *)&this->field_0x18 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uchar *)(*pcVar1)();
      return puVar3;
    }
  }
  puVar3 = *(uchar **)&this->field_0x10;
  if (((ulonglong)puVar3 & 1) != 0) {
    puVar3 = &this->field_0x10 + ((longlong)puVar3 >> 0x18);
  }
  return puVar3;
}

// GetDataPointer @ 14846bc60

uchar * __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<4>_>::GetDataPointer
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<4>_> *this)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  
  if (*(int *)&this->field_0x18 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uchar *)(*pcVar1)();
      return puVar3;
    }
  }
  puVar3 = *(uchar **)&this->field_0x10;
  if (((ulonglong)puVar3 & 1) != 0) {
    puVar3 = &this->field_0x10 + ((longlong)puVar3 >> 0x18);
  }
  return puVar3;
}

// GetDataPointer @ 14846bcc0

uchar * __thiscall
TSkeletalMeshVertexData<FMeshToMeshVertData>::GetDataPointer
          (TSkeletalMeshVertexData<FMeshToMeshVertData> *this)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  
  if (*(int *)&this->field_0x18 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uchar *)(*pcVar1)();
      return puVar3;
    }
  }
  puVar3 = *(uchar **)&this->field_0x10;
  if (((ulonglong)puVar3 & 1) != 0) {
    puVar3 = &this->field_0x10 + ((longlong)puVar3 >> 0x18);
  }
  return puVar3;
}

// GetNumVertices @ 14846cad0

uint __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<1>_>::GetNumVertices
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<1>_> *this)

{
  return *(uint *)&this->field_0x18;
}

// GetNumVertices @ 14846cae0

uint __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<2>_>::GetNumVertices
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<2>_> *this)

{
  return *(uint *)&this->field_0x18;
}

// GetNumVertices @ 14846caf0

uint __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<3>_>::GetNumVertices
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<3>_> *this)

{
  return *(uint *)&this->field_0x18;
}

// GetNumVertices @ 14846cb00

uint __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<4>_>::GetNumVertices
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<4>_> *this)

{
  return *(uint *)&this->field_0x18;
}

// GetNumVertices @ 14846cb10

uint __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<1>_>::GetNumVertices
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<1>_> *this)

{
  return *(uint *)&this->field_0x18;
}

// GetNumVertices @ 14846cb20

uint __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<2>_>::GetNumVertices
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<2>_> *this)

{
  return *(uint *)&this->field_0x18;
}

// GetNumVertices @ 14846cb30

uint __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<3>_>::GetNumVertices
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<3>_> *this)

{
  return *(uint *)&this->field_0x18;
}

// GetNumVertices @ 14846cb40

uint __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<4>_>::GetNumVertices
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<4>_> *this)

{
  return *(uint *)&this->field_0x18;
}

// GetNumVertices @ 14846cb50

uint __thiscall
TSkeletalMeshVertexData<FMeshToMeshVertData>::GetNumVertices
          (TSkeletalMeshVertexData<FMeshToMeshVertData> *this)

{
  return *(uint *)&this->field_0x18;
}

// GetResourceArray @ 14846dcb0

FResourceArrayInterface * __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<1>_>::GetResourceArray
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<1>_> *this)

{
  FResourceArrayInterface *pFVar1;
  
  pFVar1 = (FResourceArrayInterface *)&this->field_0x8;
  if (this == (TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<1>_> *)0x0) {
    pFVar1 = (FResourceArrayInterface *)0x0;
  }
  return pFVar1;
}

// GetResourceArray @ 14846dcd0

FResourceArrayInterface * __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<2>_>::GetResourceArray
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<2>_> *this)

{
  FResourceArrayInterface *pFVar1;
  
  pFVar1 = (FResourceArrayInterface *)&this->field_0x8;
  if (this == (TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<2>_> *)0x0) {
    pFVar1 = (FResourceArrayInterface *)0x0;
  }
  return pFVar1;
}

// GetResourceArray @ 14846dcf0

FResourceArrayInterface * __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<3>_>::GetResourceArray
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<3>_> *this)

{
  FResourceArrayInterface *pFVar1;
  
  pFVar1 = (FResourceArrayInterface *)&this->field_0x8;
  if (this == (TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<3>_> *)0x0) {
    pFVar1 = (FResourceArrayInterface *)0x0;
  }
  return pFVar1;
}

// GetResourceArray @ 14846dd10

FResourceArrayInterface * __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<4>_>::GetResourceArray
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<4>_> *this)

{
  FResourceArrayInterface *pFVar1;
  
  pFVar1 = (FResourceArrayInterface *)&this->field_0x8;
  if (this == (TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<4>_> *)0x0) {
    pFVar1 = (FResourceArrayInterface *)0x0;
  }
  return pFVar1;
}

// GetResourceArray @ 14846dd30

FResourceArrayInterface * __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<1>_>::GetResourceArray
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<1>_> *this)

{
  FResourceArrayInterface *pFVar1;
  
  pFVar1 = (FResourceArrayInterface *)&this->field_0x8;
  if (this == (TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<1>_> *)0x0) {
    pFVar1 = (FResourceArrayInterface *)0x0;
  }
  return pFVar1;
}

// GetResourceArray @ 14846dd50

FResourceArrayInterface * __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<2>_>::GetResourceArray
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<2>_> *this)

{
  FResourceArrayInterface *pFVar1;
  
  pFVar1 = (FResourceArrayInterface *)&this->field_0x8;
  if (this == (TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<2>_> *)0x0) {
    pFVar1 = (FResourceArrayInterface *)0x0;
  }
  return pFVar1;
}

// GetResourceArray @ 14846dd70

FResourceArrayInterface * __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<3>_>::GetResourceArray
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<3>_> *this)

{
  FResourceArrayInterface *pFVar1;
  
  pFVar1 = (FResourceArrayInterface *)&this->field_0x8;
  if (this == (TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<3>_> *)0x0) {
    pFVar1 = (FResourceArrayInterface *)0x0;
  }
  return pFVar1;
}

// GetResourceArray @ 14846dd90

FResourceArrayInterface * __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<4>_>::GetResourceArray
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<4>_> *this)

{
  FResourceArrayInterface *pFVar1;
  
  pFVar1 = (FResourceArrayInterface *)&this->field_0x8;
  if (this == (TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<4>_> *)0x0) {
    pFVar1 = (FResourceArrayInterface *)0x0;
  }
  return pFVar1;
}

// GetResourceArray @ 14846ddb0

FResourceArrayInterface * __thiscall
TSkeletalMeshVertexData<FMeshToMeshVertData>::GetResourceArray
          (TSkeletalMeshVertexData<FMeshToMeshVertData> *this)

{
  FResourceArrayInterface *pFVar1;
  
  pFVar1 = (FResourceArrayInterface *)&this->field_0x8;
  if (this == (TSkeletalMeshVertexData<FMeshToMeshVertData> *)0x0) {
    pFVar1 = (FResourceArrayInterface *)0x0;
  }
  return pFVar1;
}

// GetStride @ 148470380

uint __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<1>_>::GetStride
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<1>_> *this)

{
  return 0x18;
}

// GetStride @ 148470390

uint __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<2>_>::GetStride
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<2>_> *this)

{
  return 0x1c;
}

// GetStride @ 1484703a0

uint __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<3>_>::GetStride
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<3>_> *this)

{
  return 0x20;
}

// GetStride @ 1484703b0

uint __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<4>_>::GetStride
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<4>_> *this)

{
  return 0x24;
}

// GetStride @ 1484703c0

uint __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<1>_>::GetStride
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<1>_> *this)

{
  return 0x1c;
}

// GetStride @ 1484703d0

uint __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<2>_>::GetStride
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<2>_> *this)

{
  return 0x24;
}

// GetStride @ 1484703e0

uint __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<3>_>::GetStride
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<3>_> *this)

{
  return 0x2c;
}

// GetStride @ 1484703f0

uint __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<4>_>::GetStride
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<4>_> *this)

{
  return 0x34;
}

// GetStride @ 148470400

uint __thiscall
TSkeletalMeshVertexData<FMeshToMeshVertData>::GetStride
          (TSkeletalMeshVertexData<FMeshToMeshVertData> *this)

{
  return 0x40;
}

// ResizeBuffer @ 14848a000

void __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<1>_>::ResizeBuffer
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<1>_> *this,uint param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  
  puVar1 = &this->field_0x10;
  uVar7 = *(uint *)&this->field_0x18;
  puVar2 = &this->field_0x18;
  if (uVar7 < param_1) {
    if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
    }
    if (*(int *)&this->field_0x1c < (int)param_1) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x18,4,param_1,(ForAnyElementType *)puVar1,uVar7,(int *)&this->field_0x1c);
    }
    UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (0x18,4,param_1 - *(int *)&this->field_0x18,(ForAnyElementType *)puVar1,(int *)puVar2,
               (int *)&this->field_0x1c);
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
      puVar6 = *(undefined1 **)puVar1;
      if (((ulonglong)puVar6 & 1) != 0) {
        puVar6 = puVar1 + ((longlong)puVar6 >> 0x18);
      }
      iVar5 = (*(int *)puVar2 - uVar7) - param_1;
      if (iVar5 != 0) {
        memmove(puVar6 + (longlong)(int)param_1 * 0x18,
                (void *)((longlong)(puVar6 + (longlong)(int)param_1 * 0x18) +
                        (longlong)(int)uVar7 * 0x18),(longlong)iVar5 * 0x18);
      }
      *(uint *)puVar2 = *(int *)puVar2 - uVar7;
      UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x18,4,(ForAnyElementType *)puVar1,*(int *)puVar2,(int *)&this->field_0x1c);
    }
  }
  return;
}

// ResizeBuffer @ 14848a160

void __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<2>_>::ResizeBuffer
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<2>_> *this,uint param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  
  puVar1 = &this->field_0x10;
  uVar7 = *(uint *)&this->field_0x18;
  puVar2 = &this->field_0x18;
  if (uVar7 < param_1) {
    if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
    }
    if (*(int *)&this->field_0x1c < (int)param_1) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x1c,4,param_1,(ForAnyElementType *)puVar1,uVar7,(int *)&this->field_0x1c);
    }
    UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (0x1c,4,param_1 - *(int *)&this->field_0x18,(ForAnyElementType *)puVar1,(int *)puVar2,
               (int *)&this->field_0x1c);
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
      puVar6 = *(undefined1 **)puVar1;
      if (((ulonglong)puVar6 & 1) != 0) {
        puVar6 = puVar1 + ((longlong)puVar6 >> 0x18);
      }
      iVar5 = (*(int *)puVar2 - uVar7) - param_1;
      if (iVar5 != 0) {
        memmove(puVar6 + (longlong)(int)param_1 * 0x1c,
                (void *)((longlong)(int)uVar7 * 0x1c +
                        (longlong)(puVar6 + (longlong)(int)param_1 * 0x1c)),(longlong)iVar5 * 0x1c);
      }
      *(uint *)puVar2 = *(int *)puVar2 - uVar7;
      UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x1c,4,(ForAnyElementType *)puVar1,*(int *)puVar2,(int *)&this->field_0x1c);
    }
  }
  return;
}

// ResizeBuffer @ 14848a2c0

void __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<3>_>::ResizeBuffer
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<3>_> *this,uint param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  
  puVar1 = &this->field_0x10;
  uVar7 = *(uint *)&this->field_0x18;
  puVar2 = &this->field_0x18;
  if (uVar7 < param_1) {
    if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
    }
    if (*(int *)&this->field_0x1c < (int)param_1) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x20,4,param_1,(ForAnyElementType *)puVar1,uVar7,(int *)&this->field_0x1c);
    }
    UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (0x20,4,param_1 - *(int *)&this->field_0x18,(ForAnyElementType *)puVar1,(int *)puVar2,
               (int *)&this->field_0x1c);
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
      puVar6 = *(undefined1 **)puVar1;
      if (((ulonglong)puVar6 & 1) != 0) {
        puVar6 = puVar1 + ((longlong)puVar6 >> 0x18);
      }
      iVar5 = (*(int *)puVar2 - uVar7) - param_1;
      if (iVar5 != 0) {
        memmove(puVar6 + (longlong)(int)param_1 * 0x20,
                (void *)((longlong)(int)uVar7 * 0x20 +
                        (longlong)(puVar6 + (longlong)(int)param_1 * 0x20)),(longlong)iVar5 << 5);
      }
      *(uint *)puVar2 = *(int *)puVar2 - uVar7;
      UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x20,4,(ForAnyElementType *)puVar1,*(int *)puVar2,(int *)&this->field_0x1c);
    }
  }
  return;
}

// ResizeBuffer @ 14848a420

void __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<4>_>::ResizeBuffer
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<4>_> *this,uint param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  
  puVar1 = &this->field_0x10;
  uVar7 = *(uint *)&this->field_0x18;
  puVar2 = &this->field_0x18;
  if (uVar7 < param_1) {
    if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
    }
    if (*(int *)&this->field_0x1c < (int)param_1) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x24,4,param_1,(ForAnyElementType *)puVar1,uVar7,(int *)&this->field_0x1c);
    }
    UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (0x24,4,param_1 - *(int *)&this->field_0x18,(ForAnyElementType *)puVar1,(int *)puVar2,
               (int *)&this->field_0x1c);
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
      puVar6 = *(undefined1 **)puVar1;
      if (((ulonglong)puVar6 & 1) != 0) {
        puVar6 = puVar1 + ((longlong)puVar6 >> 0x18);
      }
      iVar5 = (*(int *)puVar2 - uVar7) - param_1;
      if (iVar5 != 0) {
        memmove(puVar6 + (longlong)(int)param_1 * 0x24,
                (void *)((longlong)(puVar6 + (longlong)(int)param_1 * 0x24) +
                        (longlong)(int)uVar7 * 0x24),(longlong)iVar5 * 0x24);
      }
      *(uint *)puVar2 = *(int *)puVar2 - uVar7;
      UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x24,4,(ForAnyElementType *)puVar1,*(int *)puVar2,(int *)&this->field_0x1c);
    }
  }
  return;
}

// ResizeBuffer @ 14848a580

void __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<1>_>::ResizeBuffer
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<1>_> *this,uint param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  
  puVar1 = &this->field_0x10;
  uVar7 = *(uint *)&this->field_0x18;
  puVar2 = &this->field_0x18;
  if (uVar7 < param_1) {
    if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
    }
    if (*(int *)&this->field_0x1c < (int)param_1) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x1c,4,param_1,(ForAnyElementType *)puVar1,uVar7,(int *)&this->field_0x1c);
    }
    UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (0x1c,4,param_1 - *(int *)&this->field_0x18,(ForAnyElementType *)puVar1,(int *)puVar2,
               (int *)&this->field_0x1c);
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
      puVar6 = *(undefined1 **)puVar1;
      if (((ulonglong)puVar6 & 1) != 0) {
        puVar6 = puVar1 + ((longlong)puVar6 >> 0x18);
      }
      iVar5 = (*(int *)puVar2 - uVar7) - param_1;
      if (iVar5 != 0) {
        memmove(puVar6 + (longlong)(int)param_1 * 0x1c,
                (void *)((longlong)(int)uVar7 * 0x1c +
                        (longlong)(puVar6 + (longlong)(int)param_1 * 0x1c)),(longlong)iVar5 * 0x1c);
      }
      *(uint *)puVar2 = *(int *)puVar2 - uVar7;
      UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x1c,4,(ForAnyElementType *)puVar1,*(int *)puVar2,(int *)&this->field_0x1c);
    }
  }
  return;
}

// ResizeBuffer @ 14848a6e0

void __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<2>_>::ResizeBuffer
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<2>_> *this,uint param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  
  puVar1 = &this->field_0x10;
  uVar7 = *(uint *)&this->field_0x18;
  puVar2 = &this->field_0x18;
  if (uVar7 < param_1) {
    if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
    }
    if (*(int *)&this->field_0x1c < (int)param_1) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x24,4,param_1,(ForAnyElementType *)puVar1,uVar7,(int *)&this->field_0x1c);
    }
    UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (0x24,4,param_1 - *(int *)&this->field_0x18,(ForAnyElementType *)puVar1,(int *)puVar2,
               (int *)&this->field_0x1c);
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
      puVar6 = *(undefined1 **)puVar1;
      if (((ulonglong)puVar6 & 1) != 0) {
        puVar6 = puVar1 + ((longlong)puVar6 >> 0x18);
      }
      iVar5 = (*(int *)puVar2 - uVar7) - param_1;
      if (iVar5 != 0) {
        memmove(puVar6 + (longlong)(int)param_1 * 0x24,
                (void *)((longlong)(puVar6 + (longlong)(int)param_1 * 0x24) +
                        (longlong)(int)uVar7 * 0x24),(longlong)iVar5 * 0x24);
      }
      *(uint *)puVar2 = *(int *)puVar2 - uVar7;
      UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x24,4,(ForAnyElementType *)puVar1,*(int *)puVar2,(int *)&this->field_0x1c);
    }
  }
  return;
}

// ResizeBuffer @ 14848a840

void __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<3>_>::ResizeBuffer
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<3>_> *this,uint param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  
  puVar1 = &this->field_0x10;
  uVar7 = *(uint *)&this->field_0x18;
  puVar2 = &this->field_0x18;
  if (uVar7 < param_1) {
    if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
    }
    if (*(int *)&this->field_0x1c < (int)param_1) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x2c,4,param_1,(ForAnyElementType *)puVar1,uVar7,(int *)&this->field_0x1c);
    }
    UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (0x2c,4,param_1 - *(int *)&this->field_0x18,(ForAnyElementType *)puVar1,(int *)puVar2,
               (int *)&this->field_0x1c);
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
      puVar6 = *(undefined1 **)puVar1;
      if (((ulonglong)puVar6 & 1) != 0) {
        puVar6 = puVar1 + ((longlong)puVar6 >> 0x18);
      }
      iVar5 = (*(int *)puVar2 - uVar7) - param_1;
      if (iVar5 != 0) {
        memmove(puVar6 + (longlong)(int)param_1 * 0x2c,
                (void *)((longlong)(int)uVar7 * 0x2c +
                        (longlong)(puVar6 + (longlong)(int)param_1 * 0x2c)),(longlong)iVar5 * 0x2c);
      }
      *(uint *)puVar2 = *(int *)puVar2 - uVar7;
      UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x2c,4,(ForAnyElementType *)puVar1,*(int *)puVar2,(int *)&this->field_0x1c);
    }
  }
  return;
}

// ResizeBuffer @ 14848a9a0

void __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<4>_>::ResizeBuffer
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<4>_> *this,uint param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  
  puVar1 = &this->field_0x10;
  uVar7 = *(uint *)&this->field_0x18;
  puVar2 = &this->field_0x18;
  if (uVar7 < param_1) {
    if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
    }
    if (*(int *)&this->field_0x1c < (int)param_1) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x34,4,param_1,(ForAnyElementType *)puVar1,uVar7,(int *)&this->field_0x1c);
    }
    UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (0x34,4,param_1 - *(int *)&this->field_0x18,(ForAnyElementType *)puVar1,(int *)puVar2,
               (int *)&this->field_0x1c);
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
      puVar6 = *(undefined1 **)puVar1;
      if (((ulonglong)puVar6 & 1) != 0) {
        puVar6 = puVar1 + ((longlong)puVar6 >> 0x18);
      }
      iVar5 = (*(int *)puVar2 - uVar7) - param_1;
      if (iVar5 != 0) {
        memmove(puVar6 + (longlong)(int)param_1 * 0x34,
                (void *)((longlong)(int)uVar7 * 0x34 +
                        (longlong)(puVar6 + (longlong)(int)param_1 * 0x34)),(longlong)iVar5 * 0x34);
      }
      *(uint *)puVar2 = *(int *)puVar2 - uVar7;
      UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x34,4,(ForAnyElementType *)puVar1,*(int *)puVar2,(int *)&this->field_0x1c);
    }
  }
  return;
}

// ResizeBuffer @ 14848ab00

void __thiscall
TSkeletalMeshVertexData<FMeshToMeshVertData>::ResizeBuffer
          (TSkeletalMeshVertexData<FMeshToMeshVertData> *this,uint param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  
  puVar1 = &this->field_0x10;
  uVar7 = *(uint *)&this->field_0x18;
  puVar2 = &this->field_0x18;
  if (uVar7 < param_1) {
    if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
    }
    if (*(int *)&this->field_0x1c < (int)param_1) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x40,0x10,param_1,(ForAnyElementType *)puVar1,uVar7,(int *)&this->field_0x1c);
    }
    UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (0x40,0x10,param_1 - *(int *)&this->field_0x18,(ForAnyElementType *)puVar1,
               (int *)puVar2,(int *)&this->field_0x1c);
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
      puVar6 = *(undefined1 **)puVar1;
      if (((ulonglong)puVar6 & 1) != 0) {
        puVar6 = puVar1 + ((longlong)puVar6 >> 0x18);
      }
      iVar5 = (*(int *)puVar2 - uVar7) - param_1;
      if (iVar5 != 0) {
        memmove(puVar6 + (longlong)(int)param_1 * 0x40,
                (void *)((longlong)(int)uVar7 * 0x40 +
                        (longlong)(puVar6 + (longlong)(int)param_1 * 0x40)),(longlong)iVar5 << 6);
      }
      *(uint *)puVar2 = *(int *)puVar2 - uVar7;
      UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x40,0x10,(ForAnyElementType *)puVar1,*(int *)puVar2,(int *)&this->field_0x1c);
    }
  }
  return;
}

// Serialize @ 14848ff90

void __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<1>_>::Serialize
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<1>_> *this,FArchive *param_1)

{
  TArray<TGPUSkinVertexFloat16Uvs<1>,TMemoryImageAllocator<0>_>::BulkSerialize
            ((TArray<TGPUSkinVertexFloat16Uvs<1>,TMemoryImageAllocator<0>_> *)&this->field_0x10,
             param_1,false);
  return;
}

// Serialize @ 14848ffb0

void __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<2>_>::Serialize
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<2>_> *this,FArchive *param_1)

{
  TArray<TGPUSkinVertexFloat16Uvs<2>,TMemoryImageAllocator<0>_>::BulkSerialize
            ((TArray<TGPUSkinVertexFloat16Uvs<2>,TMemoryImageAllocator<0>_> *)&this->field_0x10,
             param_1,false);
  return;
}

// Serialize @ 14848ffd0

void __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<3>_>::Serialize
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<3>_> *this,FArchive *param_1)

{
  TArray<TGPUSkinVertexFloat16Uvs<3>,TMemoryImageAllocator<0>_>::BulkSerialize
            ((TArray<TGPUSkinVertexFloat16Uvs<3>,TMemoryImageAllocator<0>_> *)&this->field_0x10,
             param_1,false);
  return;
}

// Serialize @ 14848fff0

void __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<4>_>::Serialize
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<4>_> *this,FArchive *param_1)

{
  TArray<TGPUSkinVertexFloat16Uvs<4>,TMemoryImageAllocator<0>_>::BulkSerialize
            ((TArray<TGPUSkinVertexFloat16Uvs<4>,TMemoryImageAllocator<0>_> *)&this->field_0x10,
             param_1,false);
  return;
}

// Serialize @ 148490010

void __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<1>_>::Serialize
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<1>_> *this,FArchive *param_1)

{
  TArray<TGPUSkinVertexFloat32Uvs<1>,TMemoryImageAllocator<0>_>::BulkSerialize
            ((TArray<TGPUSkinVertexFloat32Uvs<1>,TMemoryImageAllocator<0>_> *)&this->field_0x10,
             param_1,false);
  return;
}

// Serialize @ 148490030

void __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<2>_>::Serialize
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<2>_> *this,FArchive *param_1)

{
  TArray<TGPUSkinVertexFloat32Uvs<2>,TMemoryImageAllocator<0>_>::BulkSerialize
            ((TArray<TGPUSkinVertexFloat32Uvs<2>,TMemoryImageAllocator<0>_> *)&this->field_0x10,
             param_1,false);
  return;
}

// Serialize @ 148490050

void __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<3>_>::Serialize
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<3>_> *this,FArchive *param_1)

{
  TArray<TGPUSkinVertexFloat32Uvs<3>,TMemoryImageAllocator<0>_>::BulkSerialize
            ((TArray<TGPUSkinVertexFloat32Uvs<3>,TMemoryImageAllocator<0>_> *)&this->field_0x10,
             param_1,false);
  return;
}

// Serialize @ 148490070

void __thiscall
TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<4>_>::Serialize
          (TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<4>_> *this,FArchive *param_1)

{
  TArray<TGPUSkinVertexFloat32Uvs<4>,TMemoryImageAllocator<0>_>::BulkSerialize
            ((TArray<TGPUSkinVertexFloat32Uvs<4>,TMemoryImageAllocator<0>_> *)&this->field_0x10,
             param_1,false);
  return;
}

// Serialize @ 148490090

void __thiscall
TSkeletalMeshVertexData<FMeshToMeshVertData>::Serialize
          (TSkeletalMeshVertexData<FMeshToMeshVertData> *this,FArchive *param_1)

{
  TArray<FMeshToMeshVertData,TMemoryImageAllocator<0>_>::BulkSerialize
            ((TArray<FMeshToMeshVertData,TMemoryImageAllocator<0>_> *)&this->field_0x10,param_1,
             false);
  return;
}

// GetDataPointer @ 148648930

uchar * __thiscall
TSkeletalMeshVertexData<unsigned_int>::GetDataPointer(TSkeletalMeshVertexData<unsigned_int> *this)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  
  if (*(int *)&this->field_0x18 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uchar *)(*pcVar1)();
      return puVar3;
    }
  }
  puVar3 = *(uchar **)&this->field_0x10;
  if (((ulonglong)puVar3 & 1) != 0) {
    puVar3 = &this->field_0x10 + ((longlong)puVar3 >> 0x18);
  }
  return puVar3;
}

// GetDataPointer @ 148648990

uchar * __thiscall
TSkeletalMeshVertexData<FIndexLengthPair>::GetDataPointer
          (TSkeletalMeshVertexData<FIndexLengthPair> *this)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  
  if (*(int *)&this->field_0x18 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uchar *)(*pcVar1)();
      return puVar3;
    }
  }
  puVar3 = *(uchar **)&this->field_0x10;
  if (((ulonglong)puVar3 & 1) != 0) {
    puVar3 = &this->field_0x10 + ((longlong)puVar3 >> 0x18);
  }
  return puVar3;
}

// GetNumVertices @ 14864c4e0

uint __thiscall
TSkeletalMeshVertexData<unsigned_int>::GetNumVertices(TSkeletalMeshVertexData<unsigned_int> *this)

{
  return *(uint *)&this->field_0x18;
}

// GetNumVertices @ 14864c4f0

uint __thiscall
TSkeletalMeshVertexData<FIndexLengthPair>::GetNumVertices
          (TSkeletalMeshVertexData<FIndexLengthPair> *this)

{
  return *(uint *)&this->field_0x18;
}

// GetResourceArray @ 14864d190

FResourceArrayInterface * __thiscall
TSkeletalMeshVertexData<unsigned_int>::GetResourceArray(TSkeletalMeshVertexData<unsigned_int> *this)

{
  FResourceArrayInterface *pFVar1;
  
  pFVar1 = (FResourceArrayInterface *)&this->field_0x8;
  if (this == (TSkeletalMeshVertexData<unsigned_int> *)0x0) {
    pFVar1 = (FResourceArrayInterface *)0x0;
  }
  return pFVar1;
}

// GetResourceArray @ 14864d1b0

FResourceArrayInterface * __thiscall
TSkeletalMeshVertexData<FIndexLengthPair>::GetResourceArray
          (TSkeletalMeshVertexData<FIndexLengthPair> *this)

{
  FResourceArrayInterface *pFVar1;
  
  pFVar1 = (FResourceArrayInterface *)&this->field_0x8;
  if (this == (TSkeletalMeshVertexData<FIndexLengthPair> *)0x0) {
    pFVar1 = (FResourceArrayInterface *)0x0;
  }
  return pFVar1;
}

// GetStride @ 148650070

uint __thiscall
TSkeletalMeshVertexData<unsigned_int>::GetStride(TSkeletalMeshVertexData<unsigned_int> *this)

{
  return 4;
}

// GetStride @ 148650080

uint __thiscall
TSkeletalMeshVertexData<FIndexLengthPair>::GetStride
          (TSkeletalMeshVertexData<FIndexLengthPair> *this)

{
  return 8;
}

// ResizeBuffer @ 1486614f0

void __thiscall
TSkeletalMeshVertexData<unsigned_int>::ResizeBuffer
          (TSkeletalMeshVertexData<unsigned_int> *this,uint param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  
  puVar1 = &this->field_0x10;
  uVar7 = *(uint *)&this->field_0x18;
  puVar2 = &this->field_0x18;
  if (uVar7 < param_1) {
    if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
    }
    if (*(int *)&this->field_0x1c < (int)param_1) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (4,4,param_1,(ForAnyElementType *)puVar1,uVar7,(int *)&this->field_0x1c);
    }
    UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (4,4,param_1 - *(int *)&this->field_0x18,(ForAnyElementType *)puVar1,(int *)puVar2,
               (int *)&this->field_0x1c);
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
      puVar6 = *(undefined1 **)puVar1;
      if (((ulonglong)puVar6 & 1) != 0) {
        puVar6 = puVar1 + ((longlong)puVar6 >> 0x18);
      }
      iVar5 = (*(int *)puVar2 - uVar7) - param_1;
      if (iVar5 != 0) {
        memmove(puVar6 + (longlong)(int)param_1 * 4,
                (void *)((longlong)(puVar6 + (longlong)(int)param_1 * 4) + (longlong)(int)uVar7 * 4)
                ,(longlong)iVar5 << 2);
      }
      *(uint *)puVar2 = *(int *)puVar2 - uVar7;
      UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (4,4,(ForAnyElementType *)puVar1,*(int *)puVar2,(int *)&this->field_0x1c);
    }
  }
  return;
}

// ResizeBuffer @ 148661640

void __thiscall
TSkeletalMeshVertexData<FIndexLengthPair>::ResizeBuffer
          (TSkeletalMeshVertexData<FIndexLengthPair> *this,uint param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  
  puVar1 = &this->field_0x10;
  uVar7 = *(uint *)&this->field_0x18;
  puVar2 = &this->field_0x18;
  if (uVar7 < param_1) {
    if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
    }
    if (*(int *)&this->field_0x1c < (int)param_1) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (8,4,param_1,(ForAnyElementType *)puVar1,uVar7,(int *)&this->field_0x1c);
    }
    UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (8,4,param_1 - *(int *)&this->field_0x18,(ForAnyElementType *)puVar1,(int *)puVar2,
               (int *)&this->field_0x1c);
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
      puVar6 = *(undefined1 **)puVar1;
      if (((ulonglong)puVar6 & 1) != 0) {
        puVar6 = puVar1 + ((longlong)puVar6 >> 0x18);
      }
      iVar5 = (*(int *)puVar2 - uVar7) - param_1;
      if (iVar5 != 0) {
        memmove(puVar6 + (longlong)(int)param_1 * 8,
                (void *)((longlong)(puVar6 + (longlong)(int)param_1 * 8) + (longlong)(int)uVar7 * 8)
                ,(longlong)iVar5 << 3);
      }
      *(uint *)puVar2 = *(int *)puVar2 - uVar7;
      UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (8,4,(ForAnyElementType *)puVar1,*(int *)puVar2,(int *)&this->field_0x1c);
    }
  }
  return;
}

// Serialize @ 148662290

void __thiscall
TSkeletalMeshVertexData<unsigned_int>::Serialize
          (TSkeletalMeshVertexData<unsigned_int> *this,FArchive *param_1)

{
  TArray<unsigned_int,TMemoryImageAllocator<0>_>::BulkSerialize
            ((TArray<unsigned_int,TMemoryImageAllocator<0>_> *)&this->field_0x10,param_1,false);
  return;
}

// Serialize @ 1486622b0

void __thiscall
TSkeletalMeshVertexData<FIndexLengthPair>::Serialize
          (TSkeletalMeshVertexData<FIndexLengthPair> *this,FArchive *param_1)

{
  TArray<FIndexLengthPair,TMemoryImageAllocator<0>_>::BulkSerialize
            ((TArray<FIndexLengthPair,TMemoryImageAllocator<0>_> *)&this->field_0x10,param_1,false);
  return;
}

