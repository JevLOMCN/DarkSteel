// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshDescription
// Functions: 38

// GetElementBase @ 143671e60

int * __thiscall
TMeshAttributeArrayBase<int>::GetElementBase(TMeshAttributeArrayBase<int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  
  uVar5 = param_1 * this->Extent;
  uVar3 = 0;
  if ((int)uVar5 < (this->Container).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      piVar4 = (int *)(*pcVar1)();
      return piVar4;
    }
  }
  return (int *)((this->Container).AllocatorInstance.Data + (longlong)(int)uVar5 * 4);
}

// GetElementBase @ 143671ee0

int * __thiscall
TMeshAttributeArrayBase<int>::GetElementBase(TMeshAttributeArrayBase<int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  
  uVar5 = param_1 * this->Extent;
  uVar3 = 0;
  if ((int)uVar5 < (this->Container).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      piVar4 = (int *)(*pcVar1)();
      return piVar4;
    }
  }
  return (int *)((this->Container).AllocatorInstance.Data + (longlong)(int)uVar5 * 4);
}

// GetElementBase @ 143671f60

float * __thiscall
TMeshAttributeArrayBase<float>::GetElementBase(TMeshAttributeArrayBase<float> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float *pfVar4;
  uint uVar5;
  
  uVar5 = param_1 * this->Extent;
  uVar3 = 0;
  if ((int)uVar5 < (this->Container).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pfVar4 = (float *)(*pcVar1)();
      return pfVar4;
    }
  }
  return (float *)((this->Container).AllocatorInstance.Data + (longlong)(int)uVar5 * 4);
}

// GetElementBase @ 143671fe0

TVector2<float> * __thiscall
TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
          (TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector2<float> *pTVar4;
  uint uVar5;
  
  uVar5 = param_1 * this->Extent;
  uVar3 = 0;
  if ((int)uVar5 < (this->Container).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector2<float> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector2<float> *)((this->Container).AllocatorInstance.Data + (longlong)(int)uVar5 * 8);
}

// GetElementBase @ 143672060

TVector4<float> * __thiscall
TMeshAttributeArrayBase<UE::Math::TVector4<float>_>::GetElementBase
          (TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector4<float> *pTVar4;
  uint uVar5;
  
  uVar5 = param_1 * this->Extent;
  uVar3 = 0;
  if ((int)uVar5 < (this->Container).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector4<float> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector4<float> *)((this->Container).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x10)
  ;
}

// GetElementBase @ 1436720e0

TVector<float> * __thiscall
TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
          (TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<float> *pTVar4;
  uint uVar5;
  
  uVar5 = param_1 * this->Extent;
  uVar3 = 0;
  if ((int)uVar5 < (this->Container).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<float> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<float> *)((this->Container).AllocatorInstance.Data + (longlong)(int)uVar5 * 0xc);
}

// GetElementBase @ 143672170

FEdgeID * __thiscall
TMeshAttributeArrayBase<FEdgeID>::GetElementBase(TMeshAttributeArrayBase<FEdgeID> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FEdgeID *pFVar4;
  uint uVar5;
  
  uVar5 = param_1 * this->Extent;
  uVar3 = 0;
  if ((int)uVar5 < (this->Container).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FEdgeID *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FEdgeID *)((this->Container).AllocatorInstance.Data + (longlong)(int)uVar5 * 4);
}

// GetElementBase @ 1436721f0

FPolygonGroupID * __thiscall
TMeshAttributeArrayBase<FPolygonGroupID>::GetElementBase
          (TMeshAttributeArrayBase<FPolygonGroupID> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPolygonGroupID *pFVar4;
  uint uVar5;
  
  uVar5 = param_1 * this->Extent;
  uVar3 = 0;
  if ((int)uVar5 < (this->Container).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPolygonGroupID *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FPolygonGroupID *)((this->Container).AllocatorInstance.Data + (longlong)(int)uVar5 * 4);
}

// GetElementBase @ 143672270

FPolygonID * __thiscall
TMeshAttributeArrayBase<FPolygonID>::GetElementBase
          (TMeshAttributeArrayBase<FPolygonID> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPolygonID *pFVar4;
  uint uVar5;
  
  uVar5 = param_1 * this->Extent;
  uVar3 = 0;
  if ((int)uVar5 < (this->Container).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPolygonID *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FPolygonID *)((this->Container).AllocatorInstance.Data + (longlong)(int)uVar5 * 4);
}

// GetElementBase @ 1436722f0

FUVID * __thiscall
TMeshAttributeArrayBase<FUVID>::GetElementBase(TMeshAttributeArrayBase<FUVID> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FUVID *pFVar4;
  uint uVar5;
  
  uVar5 = param_1 * this->Extent;
  uVar3 = 0;
  if ((int)uVar5 < (this->Container).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FUVID *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FUVID *)((this->Container).AllocatorInstance.Data + (longlong)(int)uVar5 * 4);
}

// GetElementBase @ 143672370

FVertexID * __thiscall
TMeshAttributeArrayBase<FVertexID>::GetElementBase
          (TMeshAttributeArrayBase<FVertexID> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FVertexID *pFVar4;
  uint uVar5;
  
  uVar5 = param_1 * this->Extent;
  uVar3 = 0;
  if ((int)uVar5 < (this->Container).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexID *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FVertexID *)((this->Container).AllocatorInstance.Data + (longlong)(int)uVar5 * 4);
}

// GetElementBase @ 1436723f0

FVertexInstanceID * __thiscall
TMeshAttributeArrayBase<FVertexInstanceID>::GetElementBase
          (TMeshAttributeArrayBase<FVertexInstanceID> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FVertexInstanceID *pFVar4;
  uint uVar5;
  
  uVar5 = param_1 * this->Extent;
  uVar3 = 0;
  if ((int)uVar5 < (this->Container).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexInstanceID *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FVertexInstanceID *)((this->Container).AllocatorInstance.Data + (longlong)(int)uVar5 * 4);
}

// GetElementBase @ 143672470

FName * __thiscall
TMeshAttributeArrayBase<FName>::GetElementBase(TMeshAttributeArrayBase<FName> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FName *pFVar4;
  uint uVar5;
  
  uVar5 = param_1 * this->Extent;
  uVar3 = 0;
  if ((int)uVar5 < (this->Container).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FName *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FName *)((this->Container).AllocatorInstance.Data + (longlong)(int)uVar5 * 8);
}

// GetElementBase @ 1436724f0

bool * __thiscall
TMeshAttributeArrayBase<bool>::GetElementBase(TMeshAttributeArrayBase<bool> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  bool *pbVar4;
  uint uVar5;
  
  uVar5 = param_1 * this->Extent;
  uVar3 = 0;
  if ((int)uVar5 < (this->Container).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pbVar4 = (bool *)(*pcVar1)();
      return pbVar4;
    }
  }
  return (bool *)((this->Container).AllocatorInstance.Data + (int)uVar5);
}

// Initialize @ 143677140

void __thiscall
TMeshAttributeArrayBase<int>::Initialize
          (TMeshAttributeArrayBase<int> *this,int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = param_1 * this->Extent;
  if (-1 < (int)uVar7) {
    piVar1 = &(this->Container).ArrayMax;
    piVar2 = &(this->Container).ArrayNum;
    *piVar2 = 0;
    if ((this->Container).ArrayMax < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar7,(ForAnyElementType *)this,0,piVar1);
    }
    if (0 < param_1) {
      iVar6 = param_1 * this->Extent;
      if (*piVar2 < iVar6) {
        iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar6 - *piVar2,(ForAnyElementType *)this,piVar2,piVar1);
        pFVar4 = (this->Container).AllocatorInstance.Data + (longlong)iVar3 * 4;
        if (iVar3 < iVar6) {
          uVar5 = (ulonglong)(uint)(iVar6 - iVar3);
          do {
            *(int *)pFVar4 = *param_2;
            pFVar4 = pFVar4 + 4;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
}

// Initialize @ 143677220

void __thiscall
TMeshAttributeArrayBase<float>::Initialize
          (TMeshAttributeArrayBase<float> *this,int param_1,float *param_2)

{
  uint uVar1;
  
  uVar1 = param_1 * this->Extent;
  if (-1 < (int)uVar1) {
    (this->Container).ArrayNum = 0;
    if ((this->Container).ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar1,(ForAnyElementType *)this,0,&(this->Container).ArrayMax);
    }
    if (0 < param_1) {
      Insert(this,param_1 + -1,param_2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// Initialize @ 1436772a0

void __thiscall
TMeshAttributeArrayBase<UE::Math::TTransform<double>_>::Initialize
          (TMeshAttributeArrayBase<UE::Math::TTransform<double>_> *this,int param_1,
          TTransform<double> *param_2)

{
  uint uVar1;
  
  uVar1 = param_1 * this->Extent;
  if (-1 < (int)uVar1) {
    (this->Container).ArrayNum = 0;
    if ((this->Container).ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,uVar1,(ForAnyElementType *)this,0,&(this->Container).ArrayMax);
    }
    if (0 < param_1) {
      Insert(this,param_1 + -1,param_2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// Initialize @ 143677330

void __thiscall
TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::Initialize
          (TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *this,int param_1,
          TVector2<float> *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  TVector2<float>_u_0 *pTVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = param_1 * this->Extent;
  if (-1 < (int)uVar7) {
    piVar1 = &(this->Container).ArrayMax;
    piVar2 = &(this->Container).ArrayNum;
    *piVar2 = 0;
    if ((this->Container).ArrayMax < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar7,(ForAnyElementType *)this,0,piVar1);
    }
    if (0 < param_1) {
      iVar6 = param_1 * this->Extent;
      if (*piVar2 < iVar6) {
        iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,4,iVar6 - *piVar2,(ForAnyElementType *)this,piVar2,piVar1);
        pTVar4 = (TVector2<float>_u_0 *)
                 ((this->Container).AllocatorInstance.Data + (longlong)iVar3 * 8);
        if (iVar3 < iVar6) {
          uVar5 = (ulonglong)(uint)(iVar6 - iVar3);
          do {
            pTVar4->_s_0 = (TVector2<float>_u_0_s_0)param_2->field0_0x0;
            pTVar4 = pTVar4 + 1;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
}

// Initialize @ 143677420

void __thiscall
TMeshAttributeArrayBase<UE::Math::TVector4<float>_>::Initialize
          (TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *this,int param_1,
          TVector4<float> *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  uint uVar8;
  
  uVar8 = param_1 * this->Extent;
  if (-1 < (int)uVar8) {
    piVar1 = &(this->Container).ArrayMax;
    piVar2 = &(this->Container).ArrayNum;
    *piVar2 = 0;
    if ((this->Container).ArrayMax < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,0x10,uVar8,(ForAnyElementType *)this,0,piVar1);
    }
    if (0 < param_1) {
      iVar7 = param_1 * this->Extent;
      if (*piVar2 < iVar7) {
        iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,0x10,iVar7 - *piVar2,(ForAnyElementType *)this,piVar2,piVar1);
        pFVar6 = (this->Container).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
        if (iVar4 < iVar7) {
          uVar5 = (ulonglong)(uint)(iVar7 - iVar4);
          do {
            uVar3 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
            *(undefined8 *)pFVar6 = *(undefined8 *)&param_2->field0_0x0;
            *(undefined8 *)(pFVar6 + 8) = uVar3;
            pFVar6 = pFVar6 + 0x10;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
}

// Initialize @ 143677500

void __thiscall
TMeshAttributeArrayBase<UE::Math::TVector<float>_>::Initialize
          (TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this,int param_1,
          TVector<float> *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = param_1 * this->Extent;
  if (-1 < (int)uVar7) {
    piVar1 = &(this->Container).ArrayMax;
    piVar2 = &(this->Container).ArrayNum;
    *piVar2 = 0;
    if ((this->Container).ArrayMax < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar7,(ForAnyElementType *)this,0,piVar1);
    }
    if (0 < param_1) {
      iVar6 = param_1 * this->Extent;
      if (*piVar2 < iVar6) {
        iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xc,4,iVar6 - *piVar2,(ForAnyElementType *)this,piVar2,piVar1);
        if (iVar3 < iVar6) {
          uVar5 = (ulonglong)(uint)(iVar6 - iVar3);
          pFVar4 = (this->Container).AllocatorInstance.Data + (longlong)iVar3 * 0xc;
          do {
            *(undefined8 *)pFVar4 = *(undefined8 *)&param_2->field0_0x0;
            *(float *)(pFVar4 + 8) = (param_2->field0_0x0)._s_0.Z;
            uVar5 = uVar5 - 1;
            pFVar4 = pFVar4 + 0xc;
          } while (uVar5 != 0);
        }
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
}

// Initialize @ 143677600

void __thiscall
TMeshAttributeArrayBase<FName>::Initialize
          (TMeshAttributeArrayBase<FName> *this,int param_1,FName *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  FName *pFVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = param_1 * this->Extent;
  if (-1 < (int)uVar7) {
    piVar1 = &(this->Container).ArrayMax;
    piVar2 = &(this->Container).ArrayNum;
    *piVar2 = 0;
    if ((this->Container).ArrayMax < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar7,(ForAnyElementType *)this,0,piVar1);
    }
    if (0 < param_1) {
      iVar6 = param_1 * this->Extent;
      if (*piVar2 < iVar6) {
        iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,4,iVar6 - *piVar2,(ForAnyElementType *)this,piVar2,piVar1);
        pFVar4 = (FName *)((this->Container).AllocatorInstance.Data + (longlong)iVar3 * 8);
        if (iVar3 < iVar6) {
          uVar5 = (ulonglong)(uint)(iVar6 - iVar3);
          do {
            *pFVar4 = *param_2;
            pFVar4 = pFVar4 + 1;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
}

// Initialize @ 1436776f0

void __thiscall
TMeshAttributeArrayBase<bool>::Initialize
          (TMeshAttributeArrayBase<bool> *this,int param_1,bool *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = param_1 * this->Extent;
  if (-1 < (int)uVar7) {
    piVar1 = &(this->Container).ArrayMax;
    piVar2 = &(this->Container).ArrayNum;
    *piVar2 = 0;
    if ((this->Container).ArrayMax < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar7,(ForAnyElementType *)this,0,piVar1);
    }
    if (0 < param_1) {
      iVar6 = param_1 * this->Extent;
      if (*piVar2 < iVar6) {
        iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,iVar6 - *piVar2,(ForAnyElementType *)this,piVar2,piVar1);
        pFVar4 = (this->Container).AllocatorInstance.Data + iVar3;
        if (iVar3 < iVar6) {
          uVar5 = (ulonglong)(uint)(iVar6 - iVar3);
          do {
            *pFVar4 = (FScriptContainerElement)*param_2;
            pFVar4 = pFVar4 + 1;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
}

// Insert @ 1436798f0

void __thiscall
TMeshAttributeArrayBase<int>::Insert(TMeshAttributeArrayBase<int> *this,int param_1,int *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = (param_1 + 1) * this->Extent;
  iVar1 = (this->Container).ArrayNum;
  if (iVar1 < iVar4) {
    iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar4 - iVar1,(ForAnyElementType *)this,&(this->Container).ArrayNum,
                       &(this->Container).ArrayMax);
    pFVar2 = (this->Container).AllocatorInstance.Data + (longlong)iVar1 * 4;
    if (iVar1 < iVar4) {
      uVar3 = (ulonglong)(uint)(iVar4 - iVar1);
      do {
        *(int *)pFVar2 = *param_2;
        pFVar2 = pFVar2 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  return;
}

// Insert @ 143679980

void __thiscall
TMeshAttributeArrayBase<float>::Insert
          (TMeshAttributeArrayBase<float> *this,int param_1,float *param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  iVar5 = (param_1 + 1) * this->Extent;
  iVar1 = (this->Container).ArrayNum;
  if (iVar1 < iVar5) {
    iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar5 - iVar1,(ForAnyElementType *)this,&(this->Container).ArrayNum,
                       &(this->Container).ArrayMax);
    pFVar6 = (this->Container).AllocatorInstance.Data + (longlong)iVar1 * 4;
    if (iVar1 < iVar5) {
      if (3 < iVar5 - iVar1) {
        uVar2 = ((iVar5 - iVar1) - 4U >> 2) + 1;
        uVar3 = (ulonglong)uVar2;
        iVar1 = iVar1 + uVar2 * 4;
        do {
          *(float *)pFVar6 = *param_2;
          *(float *)(pFVar6 + 4) = *param_2;
          *(float *)(pFVar6 + 8) = *param_2;
          *(float *)(pFVar6 + 0xc) = *param_2;
          pFVar6 = pFVar6 + 0x10;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
        if (iVar5 <= iVar1) {
          return;
        }
      }
      lVar4 = (longlong)(iVar5 - iVar1);
      do {
        *(float *)pFVar6 = *param_2;
        pFVar6 = pFVar6 + 4;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  return;
}

// Insert @ 143679a60

void __thiscall
TMeshAttributeArrayBase<UE::Math::TTransform<double>_>::Insert
          (TMeshAttributeArrayBase<UE::Math::TTransform<double>_> *this,int param_1,
          TTransform<double> *param_2)

{
  double dVar1;
  int iVar2;
  ulonglong uVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  
  iVar5 = (param_1 + 1) * this->Extent;
  iVar2 = (this->Container).ArrayNum;
  if (iVar2 < iVar5) {
    iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,0x10,iVar5 - iVar2,(ForAnyElementType *)this,&(this->Container).ArrayNum
                       ,&(this->Container).ArrayMax);
    if (iVar2 < iVar5) {
      uVar3 = (ulonglong)(uint)(iVar5 - iVar2);
      pFVar4 = (this->Container).AllocatorInstance.Data + (longlong)iVar2 * 0x60;
      do {
        dVar1 = (param_2->Rotation).XY.m128d_f64[1];
        *(double *)pFVar4 = (param_2->Rotation).XY.m128d_f64[0];
        *(double *)(pFVar4 + 8) = dVar1;
        dVar1 = (param_2->Rotation).ZW.m128d_f64[1];
        *(double *)(pFVar4 + 0x10) = (param_2->Rotation).ZW.m128d_f64[0];
        *(double *)(pFVar4 + 0x18) = dVar1;
        dVar1 = (param_2->Translation).XY.m128d_f64[1];
        *(double *)(pFVar4 + 0x20) = (param_2->Translation).XY.m128d_f64[0];
        *(double *)(pFVar4 + 0x28) = dVar1;
        dVar1 = (param_2->Translation).ZW.m128d_f64[1];
        *(double *)(pFVar4 + 0x30) = (param_2->Translation).ZW.m128d_f64[0];
        *(double *)(pFVar4 + 0x38) = dVar1;
        dVar1 = (param_2->Scale3D).XY.m128d_f64[1];
        *(double *)(pFVar4 + 0x40) = (param_2->Scale3D).XY.m128d_f64[0];
        *(double *)(pFVar4 + 0x48) = dVar1;
        dVar1 = (param_2->Scale3D).ZW.m128d_f64[1];
        *(double *)(pFVar4 + 0x50) = (param_2->Scale3D).ZW.m128d_f64[0];
        *(double *)(pFVar4 + 0x58) = dVar1;
        uVar3 = uVar3 - 1;
        pFVar4 = pFVar4 + 0x60;
      } while (uVar3 != 0);
    }
  }
  return;
}

// Insert @ 143679b20

void __thiscall
TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::Insert
          (TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *this,int param_1,
          TVector2<float> *param_2)

{
  int iVar1;
  TVector2<float>_u_0 *pTVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = (param_1 + 1) * this->Extent;
  iVar1 = (this->Container).ArrayNum;
  if (iVar1 < iVar4) {
    iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,iVar4 - iVar1,(ForAnyElementType *)this,&(this->Container).ArrayNum,
                       &(this->Container).ArrayMax);
    pTVar2 = (TVector2<float>_u_0 *)((this->Container).AllocatorInstance.Data + (longlong)iVar1 * 8)
    ;
    if (iVar1 < iVar4) {
      uVar3 = (ulonglong)(uint)(iVar4 - iVar1);
      do {
        pTVar2->_s_0 = (TVector2<float>_u_0_s_0)param_2->field0_0x0;
        pTVar2 = pTVar2 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  return;
}

// Insert @ 143679bb0

void __thiscall
TMeshAttributeArrayBase<UE::Math::TVector4<float>_>::Insert
          (TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *this,int param_1,
          TVector4<float> *param_2)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  
  iVar5 = (param_1 + 1) * this->Extent;
  iVar2 = (this->Container).ArrayNum;
  if (iVar2 < iVar5) {
    iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,0x10,iVar5 - iVar2,(ForAnyElementType *)this,&(this->Container).ArrayNum
                       ,&(this->Container).ArrayMax);
    pFVar4 = (this->Container).AllocatorInstance.Data + (longlong)iVar2 * 0x10;
    if (iVar2 < iVar5) {
      uVar3 = (ulonglong)(uint)(iVar5 - iVar2);
      do {
        uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
        *(undefined8 *)pFVar4 = *(undefined8 *)&param_2->field0_0x0;
        *(undefined8 *)(pFVar4 + 8) = uVar1;
        pFVar4 = pFVar4 + 0x10;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  return;
}

// Insert @ 143679c40

void __thiscall
TMeshAttributeArrayBase<UE::Math::TVector<float>_>::Insert
          (TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this,int param_1,
          TVector<float> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = (param_1 + 1) * this->Extent;
  iVar1 = (this->Container).ArrayNum;
  if (iVar1 < iVar4) {
    iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,iVar4 - iVar1,(ForAnyElementType *)this,&(this->Container).ArrayNum,
                       &(this->Container).ArrayMax);
    if (iVar1 < iVar4) {
      uVar3 = (ulonglong)(uint)(iVar4 - iVar1);
      pFVar2 = (this->Container).AllocatorInstance.Data + (longlong)iVar1 * 0xc;
      do {
        *(undefined8 *)pFVar2 = *(undefined8 *)&param_2->field0_0x0;
        *(float *)(pFVar2 + 8) = (param_2->field0_0x0)._s_0.Z;
        uVar3 = uVar3 - 1;
        pFVar2 = pFVar2 + 0xc;
      } while (uVar3 != 0);
    }
  }
  return;
}

// Insert @ 143679ce0

void __thiscall
TMeshAttributeArrayBase<FName>::Insert
          (TMeshAttributeArrayBase<FName> *this,int param_1,FName *param_2)

{
  int iVar1;
  FName *pFVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = (param_1 + 1) * this->Extent;
  iVar1 = (this->Container).ArrayNum;
  if (iVar1 < iVar4) {
    iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,iVar4 - iVar1,(ForAnyElementType *)this,&(this->Container).ArrayNum,
                       &(this->Container).ArrayMax);
    pFVar2 = (FName *)((this->Container).AllocatorInstance.Data + (longlong)iVar1 * 8);
    if (iVar1 < iVar4) {
      uVar3 = (ulonglong)(uint)(iVar4 - iVar1);
      do {
        *pFVar2 = *param_2;
        pFVar2 = pFVar2 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  return;
}

// Insert @ 143679d70

void __thiscall
TMeshAttributeArrayBase<bool>::Insert(TMeshAttributeArrayBase<bool> *this,int param_1,bool *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = (param_1 + 1) * this->Extent;
  iVar1 = (this->Container).ArrayNum;
  if (iVar1 < iVar4) {
    iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar4 - iVar1,(ForAnyElementType *)this,&(this->Container).ArrayNum,
                       &(this->Container).ArrayMax);
    pFVar2 = (this->Container).AllocatorInstance.Data + iVar1;
    if (iVar1 < iVar4) {
      uVar3 = (ulonglong)(uint)(iVar4 - iVar1);
      do {
        *pFVar2 = (FScriptContainerElement)*param_2;
        pFVar2 = pFVar2 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  return;
}

// Remap @ 1436817d0

void __thiscall
TMeshAttributeArrayBase<int>::Remap
          (TMeshAttributeArrayBase<int> *this,
          TSparseArray<int,FDefaultSparseArrayAllocator> *param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  TMeshAttributeArrayBase<int> local_68;
  undefined1 local_50 [12];
  uint local_44;
  longlong local_40;
  uint local_38;
  int local_34;
  
  local_68.Extent = this->Extent;
  local_68.Container.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Container.ArrayNum = 0;
  local_68.Container.ArrayMax = 0;
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
            ((TConstIterator *)local_50,param_1);
  if (local_34 < *(int *)(local_40 + 0x18)) {
    do {
      iVar4 = local_34;
      iVar1 = *(int *)(*(longlong *)param_1 + (longlong)local_34 * 8);
      iVar9 = (iVar1 + 1) * local_68.Extent;
      if (local_68.Container.ArrayNum < iVar9) {
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar9 - local_68.Container.ArrayNum,(ForAnyElementType *)&local_68,
                           &local_68.Container.ArrayNum,&local_68.Container.ArrayMax);
        pFVar12 = local_68.Container.AllocatorInstance.Data + (longlong)iVar6 * 4;
        if (iVar6 < iVar9) {
          uVar8 = (ulonglong)(uint)(iVar9 - iVar6);
          do {
            *(int *)pFVar12 = *param_2;
            pFVar12 = pFVar12 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
      }
      uVar10 = local_68.Extent * iVar1;
      uVar7 = 0;
      if ((int)uVar10 < local_68.Container.ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar3.Data = local_68.Container.AllocatorInstance.Data;
      uVar11 = iVar4 * this->Extent;
      uVar7 = 0;
      if ((int)uVar11 < (this->Container).ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar12 = (this->Container).AllocatorInstance.Data;
      uVar8 = 0;
      if (this->Extent != 0) {
        do {
          uVar7 = (int)uVar8 + 1;
          *(undefined4 *)(FVar3.Data + uVar8 * 4 + (longlong)(int)uVar10 * 4) =
               *(undefined4 *)(pFVar12 + uVar8 * 4 + (longlong)(int)uVar11 * 4);
          uVar8 = (ulonglong)uVar7;
        } while (uVar7 < this->Extent);
      }
      local_38 = local_38 & ~local_44;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_50 + 8));
    } while (local_34 < *(int *)(local_40 + 0x18));
  }
  if (this != &local_68) {
    pFVar12 = (this->Container).AllocatorInstance.Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (this->Container).AllocatorInstance.Data = local_68.Container.AllocatorInstance.Data;
    (this->Container).ArrayNum = local_68.Container.ArrayNum;
    (this->Container).ArrayMax = local_68.Container.ArrayMax;
    local_68.Container.ArrayNum = 0;
    local_68.Container.ArrayMax = 0;
    local_68.Container.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_68.Container.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Container.AllocatorInstance.Data);
  }
  return;
}

// Remap @ 143681a20

void __thiscall
TMeshAttributeArrayBase<float>::Remap
          (TMeshAttributeArrayBase<float> *this,
          TSparseArray<int,FDefaultSparseArrayAllocator> *param_1,float *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  TMeshAttributeArrayBase<float> local_68;
  undefined1 local_50 [12];
  uint local_44;
  longlong local_40;
  uint local_38;
  int local_34;
  
  local_68.Extent = this->Extent;
  local_68.Container.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Container.ArrayNum = 0;
  local_68.Container.ArrayMax = 0;
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
            ((TConstIterator *)local_50,param_1);
  if (local_34 < *(int *)(local_40 + 0x18)) {
    do {
      iVar5 = local_34;
      iVar1 = *(int *)(*(longlong *)param_1 + (longlong)local_34 * 8);
      Insert(&local_68,iVar1,param_2);
      uVar10 = iVar1 * local_68.Extent;
      uVar7 = 0;
      if ((int)uVar10 < local_68.Container.ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar4.Data = local_68.Container.AllocatorInstance.Data;
      uVar9 = iVar5 * this->Extent;
      uVar7 = 0;
      if ((int)uVar9 < (this->Container).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->Container).AllocatorInstance.Data;
      uVar8 = 0;
      if (this->Extent != 0) {
        do {
          uVar7 = (int)uVar8 + 1;
          *(undefined4 *)(FVar4.Data + uVar8 * 4 + (longlong)(int)uVar10 * 4) =
               *(undefined4 *)(pFVar2 + uVar8 * 4 + (longlong)(int)uVar9 * 4);
          uVar8 = (ulonglong)uVar7;
        } while (uVar7 < this->Extent);
      }
      local_38 = local_38 & ~local_44;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_50 + 8));
    } while (local_34 < *(int *)(local_40 + 0x18));
  }
  if (this != &local_68) {
    pFVar2 = (this->Container).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (this->Container).AllocatorInstance.Data = local_68.Container.AllocatorInstance.Data;
    (this->Container).ArrayNum = local_68.Container.ArrayNum;
    (this->Container).ArrayMax = local_68.Container.ArrayMax;
    local_68.Container.ArrayNum = 0;
    local_68.Container.ArrayMax = 0;
    local_68.Container.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_68.Container.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Container.AllocatorInstance.Data);
  }
  return;
}

// Remap @ 143681c20

void __thiscall
TMeshAttributeArrayBase<UE::Math::TTransform<double>_>::Remap
          (TMeshAttributeArrayBase<UE::Math::TTransform<double>_> *this,
          TSparseArray<int,FDefaultSparseArrayAllocator> *param_1,TTransform<double> *param_2)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  undefined8 uVar4;
  ForAnyElementType FVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  TMeshAttributeArrayBase<UE::Math::TTransform<double>_> local_68;
  undefined1 local_50 [12];
  uint local_44;
  longlong local_40;
  uint local_38;
  int local_34;
  
  local_68.Extent = this->Extent;
  local_68.Container.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Container.ArrayNum = 0;
  local_68.Container.ArrayMax = 0;
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
            ((TConstIterator *)local_50,param_1);
  if (local_34 < *(int *)(local_40 + 0x18)) {
    do {
      iVar6 = local_34;
      iVar1 = *(int *)(*(longlong *)param_1 + (longlong)local_34 * 8);
      iVar14 = (iVar1 + 1) * local_68.Extent;
      if (local_68.Container.ArrayNum < iVar14) {
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x60,0x10,iVar14 - local_68.Container.ArrayNum,
                           (ForAnyElementType *)&local_68,&local_68.Container.ArrayNum,
                           &local_68.Container.ArrayMax);
        if (iVar8 < iVar14) {
          uVar9 = (ulonglong)(uint)(iVar14 - iVar8);
          pFVar10 = local_68.Container.AllocatorInstance.Data + (longlong)iVar8 * 0x60;
          do {
            dVar3 = (param_2->Rotation).XY.m128d_f64[1];
            *(double *)pFVar10 = (param_2->Rotation).XY.m128d_f64[0];
            *(double *)(pFVar10 + 8) = dVar3;
            dVar3 = (param_2->Rotation).ZW.m128d_f64[1];
            *(double *)(pFVar10 + 0x10) = (param_2->Rotation).ZW.m128d_f64[0];
            *(double *)(pFVar10 + 0x18) = dVar3;
            dVar3 = (param_2->Translation).XY.m128d_f64[1];
            *(double *)(pFVar10 + 0x20) = (param_2->Translation).XY.m128d_f64[0];
            *(double *)(pFVar10 + 0x28) = dVar3;
            dVar3 = (param_2->Translation).ZW.m128d_f64[1];
            *(double *)(pFVar10 + 0x30) = (param_2->Translation).ZW.m128d_f64[0];
            *(double *)(pFVar10 + 0x38) = dVar3;
            dVar3 = (param_2->Scale3D).XY.m128d_f64[1];
            *(double *)(pFVar10 + 0x40) = (param_2->Scale3D).XY.m128d_f64[0];
            *(double *)(pFVar10 + 0x48) = dVar3;
            dVar3 = (param_2->Scale3D).ZW.m128d_f64[1];
            *(double *)(pFVar10 + 0x50) = (param_2->Scale3D).ZW.m128d_f64[0];
            *(double *)(pFVar10 + 0x58) = dVar3;
            uVar9 = uVar9 - 1;
            pFVar10 = pFVar10 + 0x60;
          } while (uVar9 != 0);
        }
      }
      uVar15 = local_68.Extent * iVar1;
      uVar12 = 0;
      if ((int)uVar15 < local_68.Container.ArrayNum) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar5.Data = local_68.Container.AllocatorInstance.Data;
      uVar13 = iVar6 * this->Extent;
      uVar12 = 0;
      if ((int)uVar13 < (this->Container).ArrayNum) {
        uVar12 = ~uVar13 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar10 = (this->Container).AllocatorInstance.Data;
      uVar9 = 0;
      if (this->Extent != 0) {
        do {
          uVar12 = (int)uVar9 + 1;
          lVar11 = uVar9 * 0x60;
          uVar4 = *(undefined8 *)(pFVar10 + lVar11 + (longlong)(int)uVar13 * 0x60 + 8);
          *(undefined8 *)(FVar5.Data + lVar11 + (longlong)(int)uVar15 * 0x60) =
               *(undefined8 *)(pFVar10 + lVar11 + (longlong)(int)uVar13 * 0x60);
          *(undefined8 *)(FVar5.Data + lVar11 + (longlong)(int)uVar15 * 0x60 + 8) = uVar4;
          uVar4 = *(undefined8 *)(pFVar10 + lVar11 + 0x10 + (longlong)(int)uVar13 * 0x60 + 8);
          *(undefined8 *)(FVar5.Data + lVar11 + 0x10 + (longlong)(int)uVar15 * 0x60) =
               *(undefined8 *)(pFVar10 + lVar11 + 0x10 + (longlong)(int)uVar13 * 0x60);
          *(undefined8 *)(FVar5.Data + lVar11 + 0x10 + (longlong)(int)uVar15 * 0x60 + 8) = uVar4;
          uVar4 = *(undefined8 *)(pFVar10 + lVar11 + 0x20 + (longlong)(int)uVar13 * 0x60 + 8);
          *(undefined8 *)(FVar5.Data + lVar11 + 0x20 + (longlong)(int)uVar15 * 0x60) =
               *(undefined8 *)(pFVar10 + lVar11 + 0x20 + (longlong)(int)uVar13 * 0x60);
          *(undefined8 *)(FVar5.Data + lVar11 + 0x20 + (longlong)(int)uVar15 * 0x60 + 8) = uVar4;
          uVar4 = *(undefined8 *)(pFVar10 + lVar11 + 0x30 + (longlong)(int)uVar13 * 0x60 + 8);
          *(undefined8 *)(FVar5.Data + lVar11 + 0x30 + (longlong)(int)uVar15 * 0x60) =
               *(undefined8 *)(pFVar10 + lVar11 + 0x30 + (longlong)(int)uVar13 * 0x60);
          *(undefined8 *)(FVar5.Data + lVar11 + 0x30 + (longlong)(int)uVar15 * 0x60 + 8) = uVar4;
          uVar4 = *(undefined8 *)(pFVar10 + lVar11 + 0x40 + (longlong)(int)uVar13 * 0x60 + 8);
          *(undefined8 *)(FVar5.Data + lVar11 + 0x40 + (longlong)(int)uVar15 * 0x60) =
               *(undefined8 *)(pFVar10 + lVar11 + 0x40 + (longlong)(int)uVar13 * 0x60);
          *(undefined8 *)(FVar5.Data + lVar11 + 0x40 + (longlong)(int)uVar15 * 0x60 + 8) = uVar4;
          uVar4 = *(undefined8 *)(pFVar10 + lVar11 + 0x50 + (longlong)(int)uVar13 * 0x60 + 8);
          *(undefined8 *)(FVar5.Data + lVar11 + 0x50 + (longlong)(int)uVar15 * 0x60) =
               *(undefined8 *)(pFVar10 + lVar11 + 0x50 + (longlong)(int)uVar13 * 0x60);
          *(undefined8 *)(FVar5.Data + lVar11 + 0x50 + (longlong)(int)uVar15 * 0x60 + 8) = uVar4;
          uVar9 = (ulonglong)uVar12;
        } while (uVar12 < this->Extent);
      }
      local_38 = local_38 & ~local_44;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_50 + 8));
    } while (local_34 < *(int *)(local_40 + 0x18));
  }
  if (this != &local_68) {
    pFVar10 = (this->Container).AllocatorInstance.Data;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
    (this->Container).AllocatorInstance.Data = local_68.Container.AllocatorInstance.Data;
    (this->Container).ArrayNum = local_68.Container.ArrayNum;
    (this->Container).ArrayMax = local_68.Container.ArrayMax;
    local_68.Container.ArrayNum = 0;
    local_68.Container.ArrayMax = 0;
    local_68.Container.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_68.Container.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Container.AllocatorInstance.Data);
  }
  return;
}

// Remap @ 143681ee0

void __thiscall
TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::Remap
          (TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *this,
          TSparseArray<int,FDefaultSparseArrayAllocator> *param_1,TVector2<float> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  TVector2<float>_u_0 *pTVar13;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> local_68;
  undefined1 local_50 [12];
  uint local_44;
  longlong local_40;
  uint local_38;
  int local_34;
  
  local_68.Extent = this->Extent;
  local_68.Container.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Container.ArrayNum = 0;
  local_68.Container.ArrayMax = 0;
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
            ((TConstIterator *)local_50,param_1);
  if (local_34 < *(int *)(local_40 + 0x18)) {
    do {
      iVar5 = local_34;
      iVar1 = *(int *)(*(longlong *)param_1 + (longlong)local_34 * 8);
      iVar10 = (iVar1 + 1) * local_68.Extent;
      if (local_68.Container.ArrayNum < iVar10) {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,4,iVar10 - local_68.Container.ArrayNum,(ForAnyElementType *)&local_68,
                           &local_68.Container.ArrayNum,&local_68.Container.ArrayMax);
        pTVar13 = (TVector2<float>_u_0 *)
                  (local_68.Container.AllocatorInstance.Data + (longlong)iVar7 * 8);
        if (iVar7 < iVar10) {
          uVar9 = (ulonglong)(uint)(iVar10 - iVar7);
          do {
            pTVar13->_s_0 = (TVector2<float>_u_0_s_0)param_2->field0_0x0;
            pTVar13 = pTVar13 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
      }
      uVar11 = local_68.Extent * iVar1;
      uVar8 = 0;
      if ((int)uVar11 < local_68.Container.ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar4.Data = local_68.Container.AllocatorInstance.Data;
      uVar12 = iVar5 * this->Extent;
      uVar8 = 0;
      if ((int)uVar12 < (this->Container).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->Container).AllocatorInstance.Data;
      uVar9 = 0;
      if (this->Extent != 0) {
        do {
          uVar8 = (int)uVar9 + 1;
          *(undefined8 *)(FVar4.Data + uVar9 * 8 + (longlong)(int)uVar11 * 8) =
               *(undefined8 *)(pFVar2 + uVar9 * 8 + (longlong)(int)uVar12 * 8);
          uVar9 = (ulonglong)uVar8;
        } while (uVar8 < this->Extent);
      }
      local_38 = local_38 & ~local_44;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_50 + 8));
    } while (local_34 < *(int *)(local_40 + 0x18));
  }
  if (this != &local_68) {
    pFVar2 = (this->Container).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (this->Container).AllocatorInstance.Data = local_68.Container.AllocatorInstance.Data;
    (this->Container).ArrayNum = local_68.Container.ArrayNum;
    (this->Container).ArrayMax = local_68.Container.ArrayMax;
    local_68.Container.ArrayNum = 0;
    local_68.Container.ArrayMax = 0;
    local_68.Container.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_68.Container.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Container.AllocatorInstance.Data);
  }
  return;
}

// Remap @ 143682130

void __thiscall
TMeshAttributeArrayBase<UE::Math::TVector4<float>_>::Remap
          (TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *this,
          TSparseArray<int,FDefaultSparseArrayAllocator> *param_1,TVector4<float> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  ForAnyElementType FVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  TMeshAttributeArrayBase<UE::Math::TVector4<float>_> local_68;
  undefined1 local_50 [12];
  uint local_44;
  longlong local_40;
  uint local_38;
  int local_34;
  
  local_68.Extent = this->Extent;
  local_68.Container.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Container.ArrayNum = 0;
  local_68.Container.ArrayMax = 0;
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
            ((TConstIterator *)local_50,param_1);
  if (local_34 < *(int *)(local_40 + 0x18)) {
    do {
      iVar6 = local_34;
      iVar2 = *(int *)(*(longlong *)param_1 + (longlong)local_34 * 8);
      iVar12 = (iVar2 + 1) * local_68.Extent;
      if (local_68.Container.ArrayNum < iVar12) {
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,0x10,iVar12 - local_68.Container.ArrayNum,
                           (ForAnyElementType *)&local_68,&local_68.Container.ArrayNum,
                           &local_68.Container.ArrayMax);
        pFVar11 = local_68.Container.AllocatorInstance.Data + (longlong)iVar8 * 0x10;
        if (iVar8 < iVar12) {
          uVar10 = (ulonglong)(uint)(iVar12 - iVar8);
          do {
            uVar4 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
            *(undefined8 *)pFVar11 = *(undefined8 *)&param_2->field0_0x0;
            *(undefined8 *)(pFVar11 + 8) = uVar4;
            pFVar11 = pFVar11 + 0x10;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
      }
      uVar13 = local_68.Extent * iVar2;
      uVar9 = 0;
      if ((int)uVar13 < local_68.Container.ArrayNum) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar5.Data = local_68.Container.AllocatorInstance.Data;
      uVar14 = iVar6 * this->Extent;
      uVar9 = 0;
      if ((int)uVar14 < (this->Container).ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar11 = (this->Container).AllocatorInstance.Data;
      uVar10 = 0;
      if (this->Extent != 0) {
        do {
          uVar9 = (int)uVar10 + 1;
          pFVar1 = pFVar11 + uVar10 * 0x10 + (longlong)(int)uVar14 * 0x10;
          uVar4 = *(undefined8 *)(pFVar1 + 8);
          *(undefined8 *)(FVar5.Data + uVar10 * 0x10 + (longlong)(int)uVar13 * 0x10) =
               *(undefined8 *)pFVar1;
          *(undefined8 *)(FVar5.Data + uVar10 * 0x10 + (longlong)(int)uVar13 * 0x10 + 8) = uVar4;
          uVar10 = (ulonglong)uVar9;
        } while (uVar9 < this->Extent);
      }
      local_38 = local_38 & ~local_44;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_50 + 8));
    } while (local_34 < *(int *)(local_40 + 0x18));
  }
  if (this != &local_68) {
    pFVar11 = (this->Container).AllocatorInstance.Data;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    (this->Container).AllocatorInstance.Data = local_68.Container.AllocatorInstance.Data;
    (this->Container).ArrayNum = local_68.Container.ArrayNum;
    (this->Container).ArrayMax = local_68.Container.ArrayMax;
    local_68.Container.ArrayNum = 0;
    local_68.Container.ArrayMax = 0;
    local_68.Container.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_68.Container.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Container.AllocatorInstance.Data);
  }
  return;
}

// Remap @ 143682390

void __thiscall
TMeshAttributeArrayBase<UE::Math::TVector<float>_>::Remap
          (TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this,
          TSparseArray<int,FDefaultSparseArrayAllocator> *param_1,TVector<float> *param_2)

{
  int iVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> local_68;
  undefined1 local_50 [12];
  uint local_44;
  longlong local_40;
  uint local_38;
  int local_34;
  
  local_68.Extent = this->Extent;
  local_68.Container.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Container.ArrayNum = 0;
  local_68.Container.ArrayMax = 0;
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
            ((TConstIterator *)local_50,param_1);
  if (local_34 < *(int *)(local_40 + 0x18)) {
    do {
      iVar4 = local_34;
      iVar1 = *(int *)(*(longlong *)param_1 + (longlong)local_34 * 8);
      iVar10 = (iVar1 + 1) * local_68.Extent;
      if (local_68.Container.ArrayNum < iVar10) {
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xc,4,iVar10 - local_68.Container.ArrayNum,(ForAnyElementType *)&local_68
                           ,&local_68.Container.ArrayNum,&local_68.Container.ArrayMax);
        if (iVar6 < iVar10) {
          uVar9 = (ulonglong)(uint)(iVar10 - iVar6);
          pFVar7 = local_68.Container.AllocatorInstance.Data + (longlong)iVar6 * 0xc;
          do {
            *(undefined8 *)pFVar7 = *(undefined8 *)&param_2->field0_0x0;
            *(float *)(pFVar7 + 8) = (param_2->field0_0x0)._s_0.Z;
            uVar9 = uVar9 - 1;
            pFVar7 = pFVar7 + 0xc;
          } while (uVar9 != 0);
        }
      }
      uVar11 = local_68.Extent * iVar1;
      uVar8 = 0;
      if ((int)uVar11 < local_68.Container.ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar3.Data = local_68.Container.AllocatorInstance.Data;
      uVar12 = iVar4 * this->Extent;
      uVar8 = 0;
      if ((int)uVar12 < (this->Container).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar7 = (this->Container).AllocatorInstance.Data;
      uVar9 = 0;
      if (this->Extent != 0) {
        do {
          uVar8 = (int)uVar9 + 1;
          *(undefined8 *)(FVar3.Data + uVar9 * 0xc + (longlong)(int)uVar11 * 0xc) =
               *(undefined8 *)(pFVar7 + uVar9 * 0xc + (longlong)(int)uVar12 * 0xc);
          *(undefined4 *)(FVar3.Data + uVar9 * 0xc + (longlong)(int)uVar11 * 0xc + 8) =
               *(undefined4 *)(pFVar7 + uVar9 * 0xc + (longlong)(int)uVar12 * 0xc + 8);
          uVar9 = (ulonglong)uVar8;
        } while (uVar8 < this->Extent);
      }
      local_38 = local_38 & ~local_44;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_50 + 8));
    } while (local_34 < *(int *)(local_40 + 0x18));
  }
  if (this != &local_68) {
    pFVar7 = (this->Container).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (this->Container).AllocatorInstance.Data = local_68.Container.AllocatorInstance.Data;
    (this->Container).ArrayNum = local_68.Container.ArrayNum;
    (this->Container).ArrayMax = local_68.Container.ArrayMax;
    local_68.Container.ArrayNum = 0;
    local_68.Container.ArrayMax = 0;
    local_68.Container.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_68.Container.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Container.AllocatorInstance.Data);
  }
  return;
}

// Remap @ 143682600

void __thiscall
TMeshAttributeArrayBase<FName>::Remap
          (TMeshAttributeArrayBase<FName> *this,
          TSparseArray<int,FDefaultSparseArrayAllocator> *param_1,FName *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  FName *pFVar13;
  TMeshAttributeArrayBase<FName> local_68;
  undefined1 local_50 [12];
  uint local_44;
  longlong local_40;
  uint local_38;
  int local_34;
  
  local_68.Extent = this->Extent;
  local_68.Container.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Container.ArrayNum = 0;
  local_68.Container.ArrayMax = 0;
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
            ((TConstIterator *)local_50,param_1);
  if (local_34 < *(int *)(local_40 + 0x18)) {
    do {
      iVar5 = local_34;
      iVar1 = *(int *)(*(longlong *)param_1 + (longlong)local_34 * 8);
      iVar10 = (iVar1 + 1) * local_68.Extent;
      if (local_68.Container.ArrayNum < iVar10) {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,4,iVar10 - local_68.Container.ArrayNum,(ForAnyElementType *)&local_68,
                           &local_68.Container.ArrayNum,&local_68.Container.ArrayMax);
        pFVar13 = (FName *)(local_68.Container.AllocatorInstance.Data + (longlong)iVar7 * 8);
        if (iVar7 < iVar10) {
          uVar9 = (ulonglong)(uint)(iVar10 - iVar7);
          do {
            *pFVar13 = *param_2;
            pFVar13 = pFVar13 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
      }
      uVar11 = local_68.Extent * iVar1;
      uVar8 = 0;
      if ((int)uVar11 < local_68.Container.ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar4.Data = local_68.Container.AllocatorInstance.Data;
      uVar12 = iVar5 * this->Extent;
      uVar8 = 0;
      if ((int)uVar12 < (this->Container).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->Container).AllocatorInstance.Data;
      uVar9 = 0;
      if (this->Extent != 0) {
        do {
          uVar8 = (int)uVar9 + 1;
          *(undefined8 *)(FVar4.Data + uVar9 * 8 + (longlong)(int)uVar11 * 8) =
               *(undefined8 *)(pFVar2 + uVar9 * 8 + (longlong)(int)uVar12 * 8);
          uVar9 = (ulonglong)uVar8;
        } while (uVar8 < this->Extent);
      }
      local_38 = local_38 & ~local_44;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_50 + 8));
    } while (local_34 < *(int *)(local_40 + 0x18));
  }
  if (this != &local_68) {
    pFVar2 = (this->Container).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (this->Container).AllocatorInstance.Data = local_68.Container.AllocatorInstance.Data;
    (this->Container).ArrayNum = local_68.Container.ArrayNum;
    (this->Container).ArrayMax = local_68.Container.ArrayMax;
    local_68.Container.ArrayNum = 0;
    local_68.Container.ArrayMax = 0;
    local_68.Container.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_68.Container.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Container.AllocatorInstance.Data);
  }
  return;
}

// Remap @ 143682850

void __thiscall
TMeshAttributeArrayBase<bool>::Remap
          (TMeshAttributeArrayBase<bool> *this,
          TSparseArray<int,FDefaultSparseArrayAllocator> *param_1,bool *param_2)

{
  int iVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  TMeshAttributeArrayBase<bool> local_68;
  undefined1 local_50 [12];
  uint local_44;
  longlong local_40;
  uint local_38;
  int local_34;
  
  local_68.Extent = this->Extent;
  local_68.Container.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Container.ArrayNum = 0;
  local_68.Container.ArrayMax = 0;
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
            ((TConstIterator *)local_50,param_1);
  if (local_34 < *(int *)(local_40 + 0x18)) {
    do {
      iVar4 = local_34;
      iVar1 = *(int *)(*(longlong *)param_1 + (longlong)local_34 * 8);
      iVar11 = (iVar1 + 1) * local_68.Extent;
      if (local_68.Container.ArrayNum < iVar11) {
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,iVar11 - local_68.Container.ArrayNum,(ForAnyElementType *)&local_68,
                           &local_68.Container.ArrayNum,&local_68.Container.ArrayMax);
        pFVar8 = local_68.Container.AllocatorInstance.Data + iVar6;
        if (iVar6 < iVar11) {
          uVar9 = (ulonglong)(uint)(iVar11 - iVar6);
          do {
            *pFVar8 = (FScriptContainerElement)*param_2;
            pFVar8 = pFVar8 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
      }
      uVar12 = local_68.Extent * iVar1;
      uVar7 = 0;
      if ((int)uVar12 < local_68.Container.ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar3.Data = local_68.Container.AllocatorInstance.Data;
      uVar10 = iVar4 * this->Extent;
      uVar7 = 0;
      if ((int)uVar10 < (this->Container).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar8 = (this->Container).AllocatorInstance.Data;
      uVar9 = 0;
      if (this->Extent != 0) {
        do {
          uVar7 = (int)uVar9 + 1;
          FVar3.Data[uVar9 + (longlong)(int)uVar12] = pFVar8[uVar9 + (longlong)(int)uVar10];
          uVar9 = (ulonglong)uVar7;
        } while (uVar7 < this->Extent);
      }
      local_38 = local_38 & ~local_44;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_50 + 8));
    } while (local_34 < *(int *)(local_40 + 0x18));
  }
  if (this != &local_68) {
    pFVar8 = (this->Container).AllocatorInstance.Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    (this->Container).AllocatorInstance.Data = local_68.Container.AllocatorInstance.Data;
    (this->Container).ArrayNum = local_68.Container.ArrayNum;
    (this->Container).ArrayMax = local_68.Container.ArrayMax;
    local_68.Container.ArrayNum = 0;
    local_68.Container.ArrayMax = 0;
    local_68.Container.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_68.Container.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Container.AllocatorInstance.Data);
  }
  return;
}

